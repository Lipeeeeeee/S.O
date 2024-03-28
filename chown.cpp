#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <iostream>


using namespace std;

int main(int arg, char** args){
    struct passwd *user = getpwnam(args[1]);
    struct group *group = getgrnam(args[1]);
    uid_t uid = user->pw_uid;
    gid_t gid = group->gr_gid;
    chown(args[2], uid, gid);
}