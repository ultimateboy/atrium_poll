Atrium Poll simply wraps up drupal core's poll module into a feature for use
within Open Atrium.

This version is currently known to be compatible only with OA Beta 5.

KNOWN ISSUES:
Upon enabling this feature, immediately go to admin/content/node-type/poll
and click save. If you don't you'll see the poll menu item in places you
shouldn't.

Probably related, when doing "drush features-update atrium_poll", the
features[node][] = "poll" line is removed from the .info file. You'll need
to add this back if you plan on changing some things.