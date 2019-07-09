#include <stdlib.h>
#include <string.h>

#include <clutter/clutter.h>
#include <meta/display.h>
#include <meta/meta-plugin.h>
#include <meta/util.h>
#include <meta/main.h>

#define TEST_TYPE_SHELL_PLUGIN (test_shell_plugin_get_type ())
G_DECLARE_FINAL_TYPE (TestShellPlugin, test_shell_plugin,
                      TEST, SHELL_PLUGIN,
                      MetaPlugin)

struct _TestShellPlugin
{
  MetaPlugin parent;
};

G_DEFINE_TYPE (TestShellPlugin, test_shell_plugin, META_TYPE_PLUGIN);

static void
test_shell_plugin_class_init (TestShellPluginClass *klass)
{
  
}

static void
test_shell_plugin_init (TestShellPlugin *plugin)
{
  
}

int main (int    argc,
          char **argv)
{
  meta_plugin_manager_set_plugin_type (test_shell_plugin_get_type ());
  
  meta_init ();
  
  meta_run ();
  
  return 0;
}
