# Auto Text Files | Agrupador de textos

Programa criado em julho de 2019 para ajudar minha mãe, que estava realizando uma tarefa repetitiva de copiar e colar textos, vi que era uma oportunidade interessante para aprender mais sobre <b>C e arquivos</b>. Posteriormente, adicionei uma GUI, utilizando <br>Qt</br> e aproveitei para substituir os arquivos por um banco de dados e também aprender mais sobre estes.

<h4> Objetivo </h4>
Basicamente, existem 12 categorias, cada categoria possue vários textos diferentes, identificado por um número. Assim, o objetivo do programa é capturar o texto referente ao número de cada categoria e agrupar esses 12 textos em apenas 1.

[v0.1:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v0.1) GUI e banco de dados.  
[v1.0:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v1.0) DOS e arquivos.

Screen | Telas
-------

<h4>- Tela principal: </h4> </br>

<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/mainwindow.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/mainwindow.png" width="40%" height="40%" />

- Se ao clicar em "gerar ficha" for deixado em branco algum dos campos ou for digitado um número que não contém texto para aquele tipo, será apresentada a mensagem:</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/main-window-errormsg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/main-window-errormsg.png" width="40%" height="40%" />

- Tela que se abre quando "gerar ficha" é clicado na Tela Principal:</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha.png" width="40%" height="40%" />

- Mensagem que informa o sucesso da cópia do texto para clipboard ao clicar em "copiar texto":</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha-msg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha-msg.png" width="40%" height="40%" />

<h4> - Tela que se abre ao clicar "Atualizar textos" na Tela Principal:</h4></br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto.png" width="40%" height="40%" />

- Mensagem de sucesso ao clicar em salvar texto (substitui ou salva texto referente ao número):</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-msg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-msg.png" width="40%" height="40%" />

- Erro apresentado ao clicar em pesquisar e não existir texto relacionado ao número (digitando um texto e clicando em salvar aquele número passa a ter texto):</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-errormsg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-errormsg.png" width="40%" height="40%" />
