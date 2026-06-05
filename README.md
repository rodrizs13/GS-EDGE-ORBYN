# GS-EDGE-ORBYN 
# GS-EDGE-ORBYN

## Descrição do Projeto

A ORBYN Environment é uma plataforma de inteligência territorial desenvolvida para auxiliar no planejamento urbano e rural através da análise de dados ambientais, geográficos e territoriais.

O projeto surgiu da necessidade de compreender melhor os impactos do crescimento das cidades, das mudanças climáticas e da expansão agrícola. Através da integração de tecnologia, análise espacial e inteligência artificial, a ORBYN busca transformar grandes volumes de dados em informações estratégicas para apoiar a tomada de decisões.

A proposta permite identificar áreas de risco, monitorar condições ambientais, analisar padrões territoriais e gerar recomendações que contribuam para um desenvolvimento mais sustentável.

---

## Objetivo da Solução

A solução tem como objetivo fornecer informações confiáveis para auxiliar governos, empresas, pesquisadores e produtores rurais na tomada de decisões.

Entre seus principais objetivos estão:

- Monitorar condições ambientais;
- Auxiliar no planejamento urbano;
- Apoiar a gestão de propriedades rurais;
- Identificar riscos ambientais;
- Melhorar a utilização dos recursos naturais;
- Transformar dados em insights estratégicos.

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

## Explicação do Funcionamento

O protótipo utiliza um sensor DHT22 para coletar dados de temperatura e umidade do ambiente.

As informações capturadas são enviadas ao Arduino, que realiza o processamento dos dados e exibe os resultados em um display LCD I2C.

O monitoramento acontece continuamente, permitindo que o usuário acompanhe as condições ambientais em tempo real.

Fluxo de funcionamento:

1. O sensor realiza a leitura da temperatura e umidade.
2. Os dados são enviados para o Arduino.
3. O Arduino processa as informações.
4. Os valores são exibidos no display LCD.
5. O ciclo se repete continuamente.

---

## Estrutura do Circuito

### Sensor DHT22

| DHT22 | Arduino |
|--------|---------|
| VCC | 5V |
| DATA | Pino 2 |
| GND | GND |

### Display LCD I2C

| LCD I2C | Arduino |
|----------|----------|
| VCC | 5V |
| GND | GND |
| SDA | A4 |
| SCL | A5 |

### Diagrama Simplificado

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

Arduino Uno
