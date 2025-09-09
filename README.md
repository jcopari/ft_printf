# ft_printf

[![Made with C](https://img.shields.io/badge/Made%20with-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![42 Project](https://img.shields.io/badge/42-printf-%23000000.svg?style=flat&logo=42)](https://42.fr)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![GitHub repo size](https://img.shields.io/github/repo-size/jcopari/ft_printf?color=blue)](https://github.com/jcopari/ft_printf)
[![Last commit](https://img.shields.io/github/last-commit/jcopari/ft_printf?color=orange)](https://github.com/jcopari/ft_printf/commits/main)

> Recriação da função `printf` em linguagem C como parte do programa da 42.

---

## 📌 Sumário
- [O que é](#-o-que-é)  
- [Motivação](#-motivação)  
- [Funcionalidades](#-funcionalidades)  
- [Status do Projeto](#-status-do-projeto)  
- [Instalação](#-instalação)  
- [Uso](#-uso)  
- [Testes](#-testes)  
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)  
- [Contribuição](#-contribuição)  
- [Licença](#-licença)  
- [Contato](#-contato)

---

## 📖 O que é
O **ft_printf** é uma implementação personalizada da função `printf`, desenvolvida em C para exercitar conceitos fundamentais como **variádicos**, **formatação de strings** e **manipulação de memória**.  
O objetivo é replicar o comportamento da função original, garantindo controle total sobre cada etapa do processo.

---

## 🎯 Motivação
Este projeto foi criado para:

- Dominar o uso de `va_list`, `va_start`, `va_arg` e `va_end`.  
- Implementar e organizar múltiplos conversores (`%s`, `%d`, `%x`, `%c`, etc.).  
- Praticar modularização de código e boas práticas em C.  
- Compreender como funções de formatação funcionam "por baixo dos panos".

---

## ⚙️ Funcionalidades
✅ Suporte a especificadores:  
- `%c` → caractere  
- `%s` → string  
- `%p` → ponteiro  
- `%d`, `%i` → inteiros com sinal  
- `%u` → inteiros sem sinal  
- `%x`, `%X` → hexadecimal  
- `%%` → imprime `%`  

✅ Estrutura modular  
✅ API simples e compatível com **gcc**

---

## 📌 Status do Projeto
- ✅ Conversores principais implementados  
- ⚠️ Flags avançadas (largura, alinhamento, precisão) **não implementadas**  
- 🚀 Pronto para uso em contextos básicos  
- 🤝 Aberto para melhorias e contribuições  

---

## 💻 Instalação
Clone o repositório:

```sh
git clone https://github.com/jcopari/ft_printf.git
cd ft_printf
