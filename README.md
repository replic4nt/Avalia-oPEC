# 📚 Sistema de Biblioteca em C

Este repositório contém a implementação de um **CRUD (Create, Read, Update, Delete)** de um sistema de biblioteca, desenvolvido como parte da **Avaliação 1 da disciplina de Paradigmas de Programação**.

---

## 🎯 Objetivo

O projeto tem como objetivo aplicar conceitos de diferentes paradigmas de programação utilizando a linguagem C:

* **Paradigma Imperativo**: controle de fluxo, entrada e saída de dados, manipulação de memória.
* **Paradigma Funcional (adaptado em C)**: uso de funções puras para manipulação de dados, evitando efeitos colaterais.

---

## ⚙️ Funcionalidades

O sistema permite:

* 📌 Cadastrar livros
* 📖 Listar livros cadastrados
* ✏️ Atualizar informações de um livro
* ❌ Remover livros

Cada livro contém os seguintes atributos:

* ID
* Título
* Gênero
* Editora
* Edição

---

## 🧠 Estrutura do Projeto

O código foi dividido conceitualmente em:

### 🔹 Parte Funcional (Funções Puras)

Responsável pela lógica de manipulação dos dados:

* Criação de livros
* Atualização de registros
* Busca por ID
* Remoção de livros

Essas funções:

* Não utilizam entrada/saída (`scanf`, `printf`)
* Não dependem de variáveis globais
* Retornam novos valores sem efeitos colaterais (quando possível)

---

### 🔸 Parte Imperativa

Responsável pela interação com o usuário:

* Menu do sistema
* Entrada de dados
* Exibição de informações

---

## 🛠️ Tecnologias Utilizadas

* Linguagem C
* Compilador GCC (ou compatível)

---

## ▶️ Como Executar

1. Clone o repositório:

```bash
git clone <url-do-repositorio>
```

2. Compile o programa:

```bash
gcc main.c -o biblioteca
```

3. Execute:

```bash
./biblioteca
```

---
## 🧠 Paradigma mais fácil de implementar

O paradigma imperativo foi o mais fácil de aplicar no desenvolvimento deste projeto.

Isso ocorre porque a linguagem C é naturalmente baseada nesse paradigma, oferecendo suporte direto a estruturas de controle como loops (`for`, `while`), condicionais (`if`) e manipulação direta de variáveis e memória.

Dessa forma, operações como cadastro, listagem, atualização e remoção de livros foram implementadas de maneira mais direta e intuitiva.

Por outro lado, a aplicação do paradigma funcional apresentou maior nível de dificuldade, pois a linguagem C não possui suporte nativo a conceitos funcionais. Foi necessário adaptar a implementação por meio do uso de funções puras, evitando efeitos colaterais e dependência de estado global, o que exigiu maior planejamento na organização do código.

Assim, conclui-se que, embora ambos os paradigmas tenham sido utilizados, o paradigma imperativo se mostrou mais simples e natural dentro do contexto da linguagem C.

---

## 📚 Conceitos Aplicados

* Estruturas (`struct`)
* Vetores
* Funções
* Separação de responsabilidades
* Simulação de programação funcional em C

---

## 📌 Observações

Como a linguagem C não é funcional por natureza, os conceitos desse paradigma foram adaptados, priorizando o uso de **funções puras** e reduzindo efeitos colaterais.

---

## 👨‍💻 Autor

Guilherme Passinho

---

## 📄 Licença

Este projeto foi desenvolvido para fins acadêmicos.
