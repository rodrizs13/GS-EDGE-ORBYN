# ORBYN Environment

> Inteligência espacial para transformar dados territoriais em decisões mais inteligentes.

---

## A História da ORBYN

O mundo está mudando em uma velocidade sem precedentes.

O crescimento acelerado das cidades, as mudanças climáticas e a expansão das atividades agrícolas trouxeram novos desafios para a sociedade. Problemas como ocupação desordenada do solo, desperdício de recursos naturais, falhas na infraestrutura urbana, baixa eficiência agrícola e riscos ambientais tornaram-se cada vez mais frequentes.

Apesar da enorme quantidade de informações geradas diariamente, muitas decisões ainda são tomadas com base em dados fragmentados, dificultando a identificação de problemas antes que eles causem impactos significativos.

Foi diante desse cenário que nasceu a **ORBYN Environment**.

A ORBYN foi idealizada para utilizar tecnologia, análise territorial e inteligência artificial na construção de soluções capazes de compreender melhor o comportamento de cidades e áreas rurais.

Seu propósito é transformar grandes volumes de dados geográficos, ambientais e territoriais em informações estratégicas, permitindo que governos, empresas, pesquisadores e produtores rurais tomem decisões mais rápidas, precisas e sustentáveis.

Mais do que uma plataforma tecnológica, a ORBYN representa uma visão de futuro: um mundo onde os dados ajudam a prevenir problemas, otimizar recursos e promover um desenvolvimento mais equilibrado entre o ambiente urbano e rural.

---

## O Problema

Atualmente, a análise territorial enfrenta diversos desafios:

- Crescimento urbano desordenado;
- Baixa eficiência na utilização do solo;
- Desperdício de recursos hídricos;
- Dificuldade de monitoramento ambiental;
- Falta de integração entre diferentes fontes de dados;
- Respostas lentas diante de riscos ambientais.

Esses fatores impactam diretamente a qualidade de vida da população, a produtividade agrícola e a sustentabilidade das regiões.

---

## Nossa Solução

A ORBYN propõe uma plataforma inteligente de análise geoespacial capaz de centralizar informações urbanas e rurais em um único ambiente.

Por meio da combinação de dados ambientais, indicadores territoriais, imagens de satélite e inteligência artificial, a plataforma busca gerar conhecimento útil para apoiar a tomada de decisões.

### Principais funcionalidades

- Visualização de regiões urbanas e rurais;
- Mapas interativos;
- Dashboards analíticos;
- Alertas ambientais;
- Recomendações automáticas;
- Relatórios estratégicos;
- Monitoramento territorial.

---

## Objetivo da Solução

Desenvolver uma plataforma capaz de transformar dados em conhecimento, permitindo:

- Melhor planejamento urbano;
- Uso mais eficiente do solo agrícola;
- Identificação de áreas de risco;
- Otimização de recursos naturais;
- Tomada de decisões baseada em evidências;
- Promoção de práticas mais sustentáveis.

---

## Protótipo Edge Computing

Como prova de conceito da plataforma, foi desenvolvido um sistema embarcado utilizando Arduino para realizar o monitoramento ambiental local.

O protótipo é responsável por coletar dados do ambiente e exibir informações em tempo real, demonstrando como dispositivos de Edge Computing podem ser utilizados para capturar informações importantes diretamente na origem.

---

## Componentes Utilizados

### Hardware

- Arduino Uno
- Sensor DHT22
- Display LCD I2C 16x2
- Protoboard
- Jumpers

### Software

- Arduino IDE
- Linguagem C++
- Biblioteca DHT
- Biblioteca Wire
- Biblioteca LiquidCrystal_I2C

---
Vídeo do Pitch

Para apresentar a proposta da ORBYN Environment, foi desenvolvido um vídeo de Pitch que demonstra o contexto do problema, a solução proposta, os objetivos do projeto e os benefícios da utilização de inteligência espacial na análise territorial.

O vídeo apresenta:

O problema enfrentado por áreas urbanas e rurais;
A proposta da ORBYN Environment;
As funcionalidades da plataforma;
O protótipo de Edge Computing desenvolvido;
Os benefícios da tomada de decisão baseada em dados;
Os impactos esperados para sustentabilidade e planejamento territorial.
Acesse o vídeo do Pitch

Link do vídeo: 

Todo o material relacionado à ORBYN Environment está disponível através do repositório oficial do projeto.

No repositório podem ser encontrados:

Código-fonte;
Documentação técnica;
Diagramas do sistema;
Protótipo Arduino;
Apresentação do projeto;
Materiais complementares.
Acesse o projeto

Link do prototipo 

## Explicação do Funcionamento

O sistema realiza leituras contínuas da temperatura e da umidade do ambiente utilizando o sensor DHT22.

As informações são enviadas para o Arduino, que processa os dados localmente e apresenta os resultados em um display LCD.

### Fluxo de execução

1. Coleta de dados pelo sensor DHT22;
2. Processamento das informações pelo Arduino;
3. Exibição dos resultados no display LCD;
4. Atualização contínua das leituras.

---

## Estrutura do Circuito

### Sensor DHT22

| Pino DHT22 | Arduino |
|------------|----------|
| VCC | 5V |
| DATA | Pino 2 |
| GND | GND |

### Display LCD I2C

| Pino LCD | Arduino |
|-----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### Esquema Simplificado

```text
DHT22
├── VCC → 5V
├── DATA → Pino 2
└── GND → GND

LCD I2C
├── VCC → 5V
├── GND → GND
├── SDA → A4
└── SCL → A5


