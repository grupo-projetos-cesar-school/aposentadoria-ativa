## Passo a passo para executar o projeto no navegador

As instruções a seguir supõem que você possui ```npm``` e ```node``` instalados no seu computador. De preferência, ter a versão ```12.19.0``` de Node.js instalada, pois a aplicação foi desenvolvida nesta versão. Porém, as demais versões de Node.js também devem funcionar.

Após baixar os arquivos projeto e estando na pasta raiz deste, faça no terminal: 
```
npm install
```
Agora todas as dependências do projeto estão instaladas. Para executar a aplicação/servidor, faça:
```
npm start
```
No navegador, abra ```localhost:3000/``` e preencha suas informações que você será redirecionado automaticamente para as páginas disponíveis até então.


## Projeto Aposentadoria Ativa

O Aposentadoria Ativa surgiu com o **intuito de oferecer bem estar, segurança e instruções assertivas para os idosos que estão próximos da aposentadoria, ou até para aqueles que não estão se adaptando muito bem nessa nova fase de vida**. 

Através de processos de Design Sprint e Design Thinking, o projeto está se desenvolvendo colocando o usuário como prioridade, levando em conta a identificação dos problemas, a usabilidade, entre outras métricas necessárias para a plataforma causar impactos realmente positivos para o seu público alvo.

#### Protótipo de Interface de Média Fidelidade
![Protótipo de Média](https://media.discordapp.net/attachments/745326837449621534/771374936140939274/Frame_1_2.png?width=767&height=458)

#### Flowchart
![Flowchart do Projeto](https://i.ibb.co/68mxZq2/Arquivos-SR2-1.png)

#### Descrevendo melhor as principais seções do WebApp: 
- **Início**: no qual o usuário efetuaria o seu login. 
- **Cadastro**:  onde o usuário que não possui conta pode criá-la.
- **Página de Interesses**: (só aparecerá assim que o cadastro for realizado): na qual cada usuário irá escolher quais tópicos mais lhe interessam para, assim, formar um feed que mais se encaixe no perfil de cada um.
- **Fórum**: será o feed citado anteriormente. Nele aparecerão os posts relacionados aos interesses selecionados pelos usuários, os quais podem, também, filtrar e escolher um tópico específico, se quiserem. O objetivo da criação do fórum foi criar um local de interação entre eles através dos comentários nos posts. 
- **Sua Aposentadoria**: nela irão conter as funções de
  - **Planejamento Semanal**: rotina opcional com atividades recomendadas pelo WebApp com base nos interesses específicos já citados pelo usuário.
  - **Planejamento Para Aposentadoria**: função que contém dicas e informações importantes para que o usuário que ainda não se aposentou se prepare para esse período. Entre elas estão: “Como se planejar além do financeiro?”, “Como desenvolver novos hábitos?” e “Grupos de Convivência”.
  - **Saúde**: dicas e breves explicações sobre assuntos como exercícios e alimentação saudável. 
- **Perfil**: seção que possibilita ao usuário editar suas informações como desejar; além de possuir a opção de “tutorial”, com informações sobre como utilizar o WebApp; além da opção de sair da conta.


#### Andamento do projeto - Prototipação de baixa fidelidade



- [ ] Login
- [x] Formulário de cadastro
- [x] Cadastro de interesses
- [x] Página principal do fórum
- [ ] Página do post
- [ ] Sessão do perfil
- [ ] Editar perfil
- [ ] Sessão Minha Aposentadoria
- [ ] Tutorial de como utilizar a plataforma

