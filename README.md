# S.O<br>

&emsp;&emsp;Na matéria de S.O, desenvolvi chamadas de sistema, e para concluir o aprendizado, desenvolvi uma shell para executar as chamadas de sistema

## Shell

&emsp;&emsp;Para executar a shell, se utiliza no prompt ```./shell``` para o arquivo executável rodar, assim iniciando a shell.<br>
&emsp;&emsp;Após a execução a shell terá uma aparência normal, com ```$>``` como início de cada chamada para ser executada.<br>

## Comandos internos

EXIT - O comando ```exit``` simplesmente finaliza a execução da shell, tendo que executá-la novamente após o encerramento.<br><br>
PWD - O comando ```pwd``` printa no terminal o diretório atual onde o usuário está executando a shell.<br><br>
HISTORY - O comando ```history``` mostra o histórico de chamadas executadas naquela sessão pelo usuário, indo de 9 a 0, sendo 0 a chamada mais recente.<br>
&emsp;&emsp;-c - A flag ```-c``` limpa o histórico de chamadas.<br>
&emsp;&emsp;[offset] - ```offset``` é determinado por um número de 0 a 9, executando a chamada do histórico com este índice.<br>

## Comandos externos

[date](https://github.com/Lipeeeeeee/S.O/blob/main/date.cpp) - mostra a data e hora atual no fuso horário de Brasília (GMT - 03:00), formato hh:mm<br><br>
[uptime](https://github.com/Lipeeeeeee/S.O/blob/main/uptime.cpp) - mostra o tempo que o computador está ligado, formato dd:hh:mm:ss<br><br>
[ls](https://github.com/Lipeeeeeee/S.O/blob/main/ls.cpp) - mostra uma lista com os arquivos de um diretório específico, que caso não seja especificado, lista os arquivos do diretório atual<br><br>
[cp](https://github.com/Lipeeeeeee/S.O/blob/main/cp.cpp) - copia um arquivo e cola em outro com o nome especificado, criando um novo caso não exista arquivo com esse nome<br><br>
[rm](https://github.com/Lipeeeeeee/S.O/blob/main/rm.cpp) - remove um arquivo especificado<br><br>
[mv](https://github.com/Lipeeeeeee/S.O/blob/main/mv.cpp) - move um arquivo para outro diretório especificado, caso não haja diretório como argumento, troca o nome do arquivo para outro nome especificado<br><br>
[cat](https://github.com/Lipeeeeeee/S.O/blob/main/cat.cpp) - mostra o conteúdo em texto de um arquivo especificado<br><br>
[mkdir](https://github.com/Lipeeeeeee/S.O/blob/main/mkdir.cpp) - cria um novo diretório com o nome especificado<br><br>
[rmdir](https://github.com/Lipeeeeeee/S.O/blob/main/rmdir.cpp) - remove o diretório esecificado, somente se estiver vazio<br><br>
[chmod](https://github.com/Lipeeeeeee/S.O/blob/main/chmod.cpp) - altera as permissões de um arquivo especificado<br><br>
[chown](https://github.com/Lipeeeeeee/S.O/blob/main/chown.cpp) - altera o proprietário de um arquivo especificado<br><br>
