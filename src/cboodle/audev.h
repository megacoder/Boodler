/* Boodler: a programmable soundscape tool
   Copyright 2002-7 by Andrew Plotkin <erkyrath@eblong.com>
   <http://eblong.com/zarf/boodler/>
   The cboodle extensions are distributed under the LGPL and the
   GPL; you may use cboodle under the terms of either license.
   See the LGPL or GPL documents, or the above URL, for details.
*/

extern int audev_init_device(char *devname, long soundrate, int verbose, extraopt_t *extra);
extern void audev_close_device(void);

extern long audev_get_soundrate(void);
extern long audev_get_framesperbuf(void);
extern int audev_loop(mix_func_t mixfunc, generate_func_t genfunc, void *rock);

