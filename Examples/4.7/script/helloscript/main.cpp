/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Nokia Corporation and its Subsidiary(-ies) nor
**     the names of its contributors may be used to endorse or promote
**     products derived from this software without specific prior written
**     permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
#include <QtScript>

//! [0]
int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(helloscript);
//! [0]

//! [1]
    QApplication app(argc, argv);

    QScriptEngine engine;

    QTranslator translator;
    translator.load("helloscript_la");
    app.installTranslator(&translator);
    engine.installTranslatorFunctions();
//! [1]

//! [2]
    QPushButton button;
    QScriptValue scriptButton = engine.newQObject(&button);
    engine.globalObject().setProperty("button", scriptButton);
//! [2]

//! [3]
    QString fileName(":/helloscript.js");
    QFile scriptFile(fileName);
    scriptFile.open(QIODevice::ReadOnly);
    QTextStream stream(&scriptFile);
    QString contents = stream.readAll();
    scriptFile.close();
//! [3]

#ifdef Q_OS_SYMBIAN
    contents.replace("button.show()", "button.showMaximized()");
#endif

//! [4]
    QScriptValue result = engine.evaluate(contents, fileName);
//! [4]

//! [5]
    if (result.isError()) {
        QMessageBox::critical(0, "Hello Script",
                              QString::fromLatin1("%0:%1: %2")
                              .arg(fileName)
                              .arg(result.property("lineNumber").toInt32())
                              .arg(result.toString()));
        return -1;
    }
//! [5]

//! [6]
    return app.exec();
}
//! [6]
