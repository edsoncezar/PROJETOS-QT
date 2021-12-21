/********************************************************************************
** Form generated from reading UI file 'notificationexample.ui'
**
** Created: Fri Oct 14 18:28:06 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONEXAMPLE_H
#define UI_NOTIFICATIONEXAMPLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotificationExample
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *registerButton;
    QPushButton *unregisterButton;
    QPushButton *notificationIdButton;
    QPushButton *sendNotificationIdButton;
    QPushButton *settingsButton;
    QComboBox *notificationIconSelectionBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *notificationUiCheckBox;
    QCheckBox *wakeupCheckBox;

    void setupUi(QMainWindow *NotificationExample)
    {
        if (NotificationExample->objectName().isEmpty())
            NotificationExample->setObjectName(QString::fromUtf8("NotificationExample"));
        NotificationExample->resize(276, 325);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NotificationExample->sizePolicy().hasHeightForWidth());
        NotificationExample->setSizePolicy(sizePolicy);
        NotificationExample->setFocusPolicy(Qt::NoFocus);
        NotificationExample->setIconSize(QSize(0, 0));
        centralwidget = new QWidget(NotificationExample);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMouseTracking(false);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setLineWidth(0);
        textBrowser->setTabChangesFocus(false);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 3);

        registerButton = new QPushButton(centralwidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy1);
        registerButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(registerButton, 1, 0, 1, 1);

        unregisterButton = new QPushButton(centralwidget);
        unregisterButton->setObjectName(QString::fromUtf8("unregisterButton"));
        sizePolicy1.setHeightForWidth(unregisterButton->sizePolicy().hasHeightForWidth());
        unregisterButton->setSizePolicy(sizePolicy1);
        unregisterButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(unregisterButton, 1, 2, 1, 1);

        notificationIdButton = new QPushButton(centralwidget);
        notificationIdButton->setObjectName(QString::fromUtf8("notificationIdButton"));
        sizePolicy1.setHeightForWidth(notificationIdButton->sizePolicy().hasHeightForWidth());
        notificationIdButton->setSizePolicy(sizePolicy1);
        notificationIdButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(notificationIdButton, 2, 0, 1, 1);

        sendNotificationIdButton = new QPushButton(centralwidget);
        sendNotificationIdButton->setObjectName(QString::fromUtf8("sendNotificationIdButton"));
        sizePolicy1.setHeightForWidth(sendNotificationIdButton->sizePolicy().hasHeightForWidth());
        sendNotificationIdButton->setSizePolicy(sizePolicy1);
        sendNotificationIdButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(sendNotificationIdButton, 2, 2, 1, 1);

        settingsButton = new QPushButton(centralwidget);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        sizePolicy1.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy1);
        settingsButton->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(settingsButton, 2, 1, 1, 1);

        notificationIconSelectionBox = new QComboBox(centralwidget);
        notificationIconSelectionBox->setObjectName(QString::fromUtf8("notificationIconSelectionBox"));

        gridLayout->addWidget(notificationIconSelectionBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        notificationUiCheckBox = new QCheckBox(centralwidget);
        notificationUiCheckBox->setObjectName(QString::fromUtf8("notificationUiCheckBox"));
        sizePolicy1.setHeightForWidth(notificationUiCheckBox->sizePolicy().hasHeightForWidth());
        notificationUiCheckBox->setSizePolicy(sizePolicy1);
        notificationUiCheckBox->setFocusPolicy(Qt::TabFocus);
        notificationUiCheckBox->setIconSize(QSize(0, 0));

        horizontalLayout->addWidget(notificationUiCheckBox);

        wakeupCheckBox = new QCheckBox(centralwidget);
        wakeupCheckBox->setObjectName(QString::fromUtf8("wakeupCheckBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wakeupCheckBox->sizePolicy().hasHeightForWidth());
        wakeupCheckBox->setSizePolicy(sizePolicy2);
        wakeupCheckBox->setFocusPolicy(Qt::TabFocus);
        wakeupCheckBox->setIconSize(QSize(0, 0));

        horizontalLayout->addWidget(wakeupCheckBox);


        verticalLayout->addLayout(horizontalLayout);

        NotificationExample->setCentralWidget(centralwidget);

        retranslateUi(NotificationExample);

        QMetaObject::connectSlotsByName(NotificationExample);
    } // setupUi

    void retranslateUi(QMainWindow *NotificationExample)
    {
        NotificationExample->setWindowTitle(QApplication::translate("NotificationExample", "Notification Example", 0, QApplication::UnicodeUTF8));
        registerButton->setText(QApplication::translate("NotificationExample", "Register", 0, QApplication::UnicodeUTF8));
        unregisterButton->setText(QApplication::translate("NotificationExample", "Unregister", 0, QApplication::UnicodeUTF8));
        notificationIdButton->setText(QApplication::translate("NotificationExample", "Get NID", 0, QApplication::UnicodeUTF8));
        sendNotificationIdButton->setText(QApplication::translate("NotificationExample", "Send NID", 0, QApplication::UnicodeUTF8));
        settingsButton->setText(QApplication::translate("NotificationExample", "Get settings", 0, QApplication::UnicodeUTF8));
        notificationIconSelectionBox->clear();
        notificationIconSelectionBox->insertItems(0, QStringList()
         << QApplication::translate("NotificationExample", "GIF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NotificationExample", "SVG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NotificationExample", "PNG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NotificationExample", "JPEG", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        notificationIconSelectionBox->setToolTip(QApplication::translate("NotificationExample", "Icon to be set in Notification Ui", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        notificationUiCheckBox->setText(QApplication::translate("NotificationExample", "Use Notification Ui", 0, QApplication::UnicodeUTF8));
        wakeupCheckBox->setText(QApplication::translate("NotificationExample", "Allow wake-up", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NotificationExample: public Ui_NotificationExample {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONEXAMPLE_H
