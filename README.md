# 🤖 Robô de Controle Remoto via App

[Read in English](README_en.md)

Robô controlado por aplicativo mobile via Bluetooth, desenvolvido com Arduino. O usuário controla a direção do robô em tempo real através de um app com botões direcionais (frente, trás, esquerda, direita).

---

## 🎥 Demonstração


> 📹 Vídeo do robô funcionando

https://github.com/user-attachments/assets/044ef72b-158d-496e-b9ac-c2ed1af44259

> 🔗 *[Simulação inicial no Tinkercad — controle via teclado](https://www.tinkercad.com/things/6S6Vjp67ifz-4-direcoes-motores?sharecode=yL1eYiJb9YelSWaQWgfyzSe1TL27KY-4ayfizqLFgcg)*

---

## 🛠️ Tecnologias e Componentes

**Hardware**
- Arduino Uno
- Módulo Bluetooth HC-05/HC-06
- 2x Motor DC
- Ponte H L298N (controle dos motores)
- Chassi de robô + rodas

**Software**
- Linguagem: C++ (Arduino IDE)
- App mobile: MIT App Inventor (Android)

---

## 🔄 Processo de desenvolvimento

O projeto foi construído em duas etapas:

**1ª etapa — Prova de conceito (Tinkercad)**
Simulação do carrinho controlado pelo teclado do computador, para validar a lógica de acionamento dos motores e a resposta aos comandos direcionais.

**2ª etapa — Versão física com controle via app**
A partir do código base validado na simulação, foram adicionadas as rotinas de comunicação Bluetooth e o robô foi montado fisicamente. O controle passou a ser feito pelo aplicativo mobile criado no App Inventor.

---

## ⚙️ Como funciona

1. O aplicativo mobile envia comandos via Bluetooth ao módulo HC-05
2. O Arduino recebe os comandos e aciona os motores conforme a direção
3. A Ponte H controla sentido e velocidade de cada motor

**Comandos disponíveis:**
| Botão no App | Ação do Robô |
|---|---|
| ▲ Frente | Ambos os motores giram para frente |
| ▼ Trás | Ambos os motores giram para trás |
| ◀ Esquerda | Motor direito frente, motor esquerdo parado |
| ▶ Direita | Motor esquerdo frente, motor direito parado |

---

## 📁 Estrutura do Repositório

```
remote-controlled-robot/
├── code/
│   └── robo_bluetooth.ino   # Código principal do Arduino
├── app/
│   └── controle_robo.aia    # Arquivo do App Inventor (importável)
└── README.md
```

---

## 🚀 Como usar

**Para o robô:**
1. Monte o circuito conforme a simulação no Tinkercad
2. Carregue o arquivo `.ino` no Arduino via Arduino IDE
3. Pareie o módulo HC-05 com seu celular (senha padrão: `1234`)

**Para o app:**
1. Acesse [MIT App Inventor](https://appinventor.mit.edu/)
2. Importe o arquivo `.aia` em *Projects > Import project*
3. Conecte ao Bluetooth do HC-05 e use os botões direcionais

---

## 📚 Contexto

Projeto desenvolvido na disciplina de **Experimentação Orientada** do curso de Ciência da Computação na Universidade de Fortaleza (Unifor), 1º semestre de 2025.

Desenvolvido em dupla — responsável pela **programação do Arduino e criação do aplicativo mobile**.

---

## 👩‍💻 Autora

**Larissa Vieira**
[LinkedIn](https://linkedin.com/in/larissalvl) · [Instagram @larissalvl](https://instagram.com/larissalvl)
