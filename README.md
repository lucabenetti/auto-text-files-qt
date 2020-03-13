# Auto Text Files | Agrupador de textos

Program created in July 2019 to help my mother. She was doing a repetitive task of copying and pasting texts, I saw that and thought that would be an interesting opportunity to learn more about <b>C and files</b>. Later, I used <b>Qt</b> for GUI and taked the opportunity to replace the files for a database and also learn more about it.

<h3> Objective </h3>
Basically, there are 12 categories, each category has several different texts, identified by a number. So, the objective of the program is to capture the text referred by the number of each category and to add these 12 texts in just 1.

- [v0.1:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v0.1) GUI and database.  
- [v1.0:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v1.0) DOS and files.

PT-BR
------
Programa criado em julho de 2019 para ajudar minha mãe, que estava realizando uma tarefa repetitiva de copiar e colar textos, vi que era uma oportunidade interessante para aprender mais sobre <b>C e arquivos</b>. Posteriormente, adicionei uma GUI, utilizando <b>Qt</b> e aproveitei para substituir os arquivos por um banco de dados e também aprender mais sobre estes.

<h3> Objetivo </h3>
Basicamente, existem 12 categorias, cada categoria possue vários textos diferentes, identificado por um número. Assim, o objetivo do programa é capturar o texto referente ao número de cada categoria e agrupar esses 12 textos em apenas 1.

- [v0.1:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v0.1) GUI e banco de dados.  
- [v1.0:](https://github.com/lucabenetti/auto-text-files-qt/tree/master/v1.0) DOS e arquivos.

Screens | Telas
-------
<h4>- Main window | Tela principal: </h4> </br>

<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/mainwindow.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/mainwindow.png" width="40%" height="40%" />

- If any of the fields is left blank when clicking "gerar ficha" or a number entered does not contain text for that category, the message will be displayed ('You typed a number of avaliation that does not exist. Type correctly again or update the texts!')
- Se ao clicar em "gerar ficha" for deixado em branco algum dos campos ou for digitado um número que não contém texto para aquela categoria, será apresentada a mensagem:</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/main-window-errormsg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/main-window-errormsg.png" width="40%" height="40%" />

- Screen that opens up when "gerar ficha" is clicked on main window
- Tela que se abre quando "gerar ficha" é clicado na Tela Principal:</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha.png" width="40%" height="40%" />

- Message that inform that the text was successful copied to clipboard ('Text copied to clipboard. Now you can paste in your file!')
- Mensagem que informa o sucesso da cópia do texto para clipboard ao clicar em "copiar texto":</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha-msg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/gerar-ficha-msg.png" width="40%" height="40%" />

<h4> - Screen that opens up when "atualizar textos" is clicked - see the dropdown menu with 12 options
  - Tela que se abre ao clicar "Atualizar textos" na Tela Principal - atentar ao menu de seleção com 12 opções:</h4></br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto.png" width="40%" height="40%" />

- Message that inform that the text was successful copied to clipboard ('Text updated') 
- Mensagem de sucesso ao clicar em salvar texto (substitui ou salva texto referente ao número):</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-msg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-msg.png" width="40%" height="40%" />

- Message error presented when clicking on "pesquisar" and there is no text related to the number - if you type a text and click on save that number will get a text - ('This number has no text. To create a text for this number write and save!')
- Erro apresentado ao clicar em "pesquisar" e não existir texto relacionado ao número (digitando um texto e clicando em salvar aquele número passa a ter texto):</br>
<img src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-errormsg.png" data-canonical-src="https://raw.githubusercontent.com/lucabenetti/auto-text-files-qt/master/imgs/atualizar-texto-errormsg.png" width="40%" height="40%" />
