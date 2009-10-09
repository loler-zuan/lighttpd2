#ifndef _LIGHTTPD_ANGEL_H_
#define _LIGHTTPD_ANGEL_H_

typedef void (*liAngelListenCB)(liServer *srv, int fd, gpointer data);

/* interface to the angel; implementation needs to work without angel too */
LI_API void li_angel_setup(liServer *srv);

/* listen to a socket */
LI_API void li_angel_listen(liServer *srv, GString *str, liAngelListenCB cb, gpointer data);

/* send log messages during startup to angel, frees the string */
LI_API void li_angel_log(liServer *srv, GString *str);


/* angle_fake definitions, only for internal use */
int li_angel_fake_listen(liServer *srv, GString *str);
gboolean li_angel_fake_log(liServer *srv, GString *str);

#endif
