<<<<<<< HEAD
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
=======
#include <unistd.h> // uso do método 'chown'
#include <sys/types.h> // definição de tipos representando usuários e grupos
#include <pwd.h> // recuperação de dados do usuário
#include <grp.h> // recuperação de dados do grupo

using namespace std;

int main(int arg, char** args){
    struct passwd *user = getpwnam(args[1]); // recuperando usuário pelo parâmetro
    struct group *group = getgrnam(args[1]); // recuperando grupo pelo parâmetro
    uid_t uid = user->pw_uid; // recuperando id do usuário
    gid_t gid = group->gr_gid; // recuperando id do grupo
    chown(args[2], uid, gid); // alterando proprietários do arquivo especificado
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
