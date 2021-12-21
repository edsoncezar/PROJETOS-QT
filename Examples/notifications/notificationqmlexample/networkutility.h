/*
 *  This file is part of Notifications API 
 *  Copyright 2011 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
 *  Contact:  notifications.support@nokia.com
 *  This software, including documentation, is protected by copyright controlled by Nokia Corporation. 
 *  All rights reserved. You may use this file only in accordance with the Nokia Developer Software 
 *  Agreement version 2.0 and accompanying Ovi any additional terms. This material also contains 
 *  confidential information which may not be disclosed to others without the prior written consent of Nokia.
 */

#ifndef NETWORK_UTILITY_H_
#define NETWORK_UTILITY_H_

#include <QtNetwork>
#include <QObject>

class NetworkUtility : public QObject
{
    Q_OBJECT
public:
    NetworkUtility();
    ~NetworkUtility();

public Q_SLOTS:
    void sendNotificationId(QString aPostUrl, QString aServiceId, QString aNotificationId);
    void sslErrors(QNetworkReply * reply, const QList<QSslError> &);

private:
    QNetworkAccessManager *iHttpManager;
};

#endif // NETWORK_UTILITY_H_
