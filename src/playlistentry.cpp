#include "playlistentry.h"
#include <sailfishapp.h>
#include <QStandardPaths>

PlaylistEntry::PlaylistEntry(QObject *parent) : QObject(parent)
{
}

QString PlaylistEntry::writableDir() {
    return QStandardPaths::writableLocation(QStandardPaths::DataLocation);
}

QString PlaylistEntry::dataDir() {
    return SailfishApp::pathTo("./").toString();
}

QString PlaylistEntry::cacheDir() {
    return QStandardPaths::writableLocation(QStandardPaths::CacheLocation);
}
