#ifndef PLAYLISTENTRY_H
#define PLAYLISTENTRY_H

#include <QObject>
#include <QString>

/**
 * @brief The PLAYLISTENTRY class provides information about
 * a playlist entry (one or more connected files).
 */
class PlaylistEntry : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QVector<QString> playFiles READ playFiles NOTIFY coverImageChanged)
    Q_PROPERTY(QString coverImage READ coverImage WRITE setCoverImage NOTIFY coverImageChanged)
    Q_PROPERTY(QString playText READ playText WRITE setPlayText NOTIFY playTextChanged)
    Q_PROPERTY(QVector<QString>::Iterator posFile READ posFile WRITE posFile NOTIFY posFileChanged)
    Q_PROPERTY(int posTime READ posTime WRITE TimFile NOTIFY posTimeChanged)
    Q_PROPERTY(QString dataDir READ dataDir NOTIFY dataDirChanged)  //+ notify(!)

    Q_PROPERTY(QString writableDir READ writableDir NOTIFY writableDirChanged)
    Q_PROPERTY(QString cacheDir READ cacheDir NOTIFY cacheDirChanged)
public:
    explicit PLAYLISTENTRY(QObject *parent = 0);
    QString cacheDir();
    QString dataDir();
    QString writableDir();
signals:
    void cacheDirChanged();
    void dataDirChanged();
    void writableDirChanged();
public slots:
};

#endif // PLAYLISTENTRY_H
