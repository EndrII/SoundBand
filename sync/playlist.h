#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <QMediaPlaylist>
#include "song.h"

using namespace syncLib;

/**
 * @brief The PlayList class
 * palyList with songs info
 */
class PlayList
{
private:
    /**
     * @brief playList media play list
     */
    QMediaPlaylist *playList;

    /**
     * @brief playListInfo - info from databas
     */
    QList<SongStorage> playListInfo;
public:
    PlayList(QMediaPlaylist * playList);

    /**
     * @brief getInfo
     * @return info from database about songs
     */
    QList<SongStorage>* getInfo();

    /**
     * @brief clear this play list
     */
    void clear();

    /**
     * @brief addMedia media content into playList
     * @param song - media content
     * @return true if all done
     */
    bool addMedia(const SongStorage& song);

    /**
     * @brief isValid
     * @return true if this object valid
     */
    bool isValid()const;

    /**
     * @brief isEmpty
     * @return true if playlist empty
     */
    bool isEmpty()const;

    /**
     * @brief getlist
     * @return return pointer to media content
     */
    QMediaPlaylist* getList();

    /**
     * @brief currentHeader
     * @return header of curent song
     */
    const SongHeader& currentHeader()const;

    /**
     * @brief currentStorage
     * @return header of curent song
     */
    const SongStorage& currentSong()const;

    /**
     * @brief size
     * @return count of media items of playlist
     */
    int size()const;

    ~PlayList();
};

#endif // PLAYLIST_H