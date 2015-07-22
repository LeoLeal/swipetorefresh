/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "br.com.leoleal.swipetorefresh.SwipeToRefreshProxy.h"
#include "br.com.leoleal.swipetorefresh.SwipetorefreshModule.h"


#line 14 "/private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 2, duplicates = 0 */

class SwipetorefreshBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
SwipetorefreshBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
SwipetorefreshBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 49,
      MAX_WORD_LENGTH = 50,
      MIN_HASH_VALUE = 49,
      MAX_HASH_VALUE = 50
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf"
      {"br.com.leoleal.swipetorefresh.SwipeToRefreshProxy", ::br::com::leoleal::swipetorefresh::swipetorefresh::SwipeToRefreshProxy::bindProxy, ::br::com::leoleal::swipetorefresh::swipetorefresh::SwipeToRefreshProxy::dispose},
#line 17 "/private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf"
      {"br.com.leoleal.swipetorefresh.SwipetorefreshModule", ::br::com::leoleal::swipetorefresh::SwipetorefreshModule::bindProxy, ::br::com::leoleal::swipetorefresh::SwipetorefreshModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/jh/f5rskmm50j33k4tygx08kd0061rq36/T/lleal/swipetorefresh-generated/KrollGeneratedBindings.gperf"

