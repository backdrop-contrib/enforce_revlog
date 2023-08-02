# Enforce Revision Logs
<!--
The first paragraph of this file should be kept short as it will be used as the
project summary on BackdropCMS.org. Aim for about 240 characters (three lines at
80 characters each).

All lines in this file should be no more than 80 characters long for legibility,
unless including a URL or example that requires the line to not wrap.
|<- - - - - - - This line is exactly 80 characters for reference - - - - - - ->|

Detail in READMEs should be limited to the minimum required for installation and
getting started. More detailed documentation should be moved to a GitHub wiki
page; for example: https://github.com/backdrop-contrib/setup/wiki/Documentation.
-->
Enforce Revision Logs allows an administrator to force users to write a
revision log message whenever a revision is created. It can also force a
revision to be created for every modification.

If you have several editors for your website's content, it's probable you'll
want to be able to easily track the modifications made by each one on the pages.

When enabling node revisions, you can have access to every previous version of
a node. But having to dig into former revisions to know what has been done, or
to revert to a given point in the past, is not that practical.

Enter log messages. Each time someone updates a node where revisions are
enabled, one can leave a comment on what has been done. The problem with log 
messages is that there is no way to make them mandatory, and you'll soon notice
that users often forget or disregard what is only optional.

This module brings a solution by allowing administrators to make revision log
messages required as well as enforcing revisions for every modification.

There are permissions to skip creating a log message and to override the
setting to create a new revision. However, you can also go the other way and
remove the permissions entirely, including from User 1, which could be
important to prevent untracked changes or inadvertent data loss that even
administrators can cause.

### Differences from Drupal 7
- Allow to force revisions for each modification.
- Allow to force revision log and force revisions for User 1 if permission is
disabled for the admin role. This helps you with self discipline in creating
revisions.
- Settings is under Configuration > Content Authoring (`admin/config/content/enforce-revlog`)
rather than Configuration > User Interface (`admin/config/user-interface/enforce_revlog`).
- The link to the permissions on the settings page uses either the core
permission search or the [Filter Permissions](https://backdropcms.org/project/filter_perms)
module to go directly to the settings.
- Wording and user interface improvements including changing the name to
"Enforce Revision Logs" although the system name remains `enforce_revlog`

## Installation
<!--
List the steps needed to install and configure the module. Add/remove steps as
necessary.
-->
- Install this module using the official Backdrop CMS instructions at
  https://docs.backdropcms.org/documentation/extend-with-modules.
- Navigate to Admin > Configuration > Content authoring > Enforce Revision Logs
(`admin/config/content/enforce-revlog`) to set the Global settings
and enable for each content type.
- Alternatively you can (de)activate Enforce Revision Logs for a given content
  type on the content type configuration form.
- Configure permissions to override create new revision and skip revision log
messages.

## Usage
<!--
Link to the repository's wiki if more documentation can be found there. Remove
this section if not needed (and consider disabling the wiki in the repo settings
if not used).
-->
Enforce Revision Logs will only be enabled for a node when a revision is about
to be created. Therefore it WON'T require users to enter a log message
when:

- The node is being created (no previous version exists).
- "Create new revision" is disabled (on the node form or set as a
  default through the content type configuration form).

Make sure that "Create new revision" is checked as the default behavior 
for the content types on which Enforce Revision Log is set.

Ensure the Global settings and permissions are configured to meet your needs.

If the "Create new revision" checkbox on the node editing form is unchecked
while editing a node, Enforce Revision Logs will be disabled.  If it's checked
again, Enforce Revision Logs will be enabled again.

### Developers
On the node add/edit form, Enforce Revision Logs will check if the property
`$node->enforce_revlog` is set before enabling itself. Therefore you can
define your very own conditions to set/unset `$node->enforce_revlog` in a
custom module.

## Issues
<!--
Link to the repo's issue queue.
-->
Bugs and Feature Requests should be reported in the Issue Queue:
https://github.com/backdrop-contrib/enforce_revlog/issues.

## Current Maintainers
<!--
List the current maintainer(s) of the module, and note if this module needs
new/additional maintainers.
-->
- [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons Ltd](https://www.systemhorizons.co.uk)
- Collaboration and co-maintainers welcome!

## Credits
<!--
Give credit where credit's due.
If this is a Drupal port, state who ported it, and who wrote the original Drupal
module. If this module is based on another project, or uses third-party
libraries, list them here. You can also mention any organisations/companies who
sponsored the module's development.
-->
- Ported to Backdrop CMS by - [Martin Price](https://github.com/yorkshire-pudding) - [System Horizons Ltd](https://www.systemhorizons.co.uk)
- Port sponsored by [System Horizons Ltd](https://www.systemhorizons.co.uk)
- Written for Drupal by [Michaël Dupont](https://www.drupal.org/u/mdupont)

## License
<!--
Mention what license this module is released under, and where people can find
it.
-->
This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.