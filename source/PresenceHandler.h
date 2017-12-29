#ifndef PRESENCEHANDLER_H
#define PRESENCEHANDLER_H

#include <QObject>
#include <Swiften/Swiften.h>

class RosterController;

class PresenceHandler : public QObject
{
    Q_OBJECT
public:
    explicit PresenceHandler(QObject *parent = 0);

    void setClient(Swift::Client* client);
    void setRosterController(RosterController* rosterController);

    void initialize();

signals:

public slots:

private:
    void handlePresenceReceived(Swift::Presence::ref presence);
    void handlePresenceChanged(Swift::Presence::ref presence);

    Swift::Client* client_;
    RosterController* rosterController_;
};

#endif // PRESENCEHANDLER_H
