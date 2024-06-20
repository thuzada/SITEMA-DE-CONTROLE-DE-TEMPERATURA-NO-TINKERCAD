# SITEMA-DE-CONTROLE-DE-TEMPERATURA-NO-TINKERCAD
# Sistema de Controle de Temperatura para Piscina

Este projeto simula um sistema de controle de temperatura para uma piscina utilizando componentes eletrônicos no Tinkercad. O sistema permite o ajuste manual da temperatura da água, monitorando e ajustando a temperatura com indicadores de LED e um buzzer para alertas de sobreaquecimento.

## Componentes Utilizados

- Arduino Uno (ou similar)
- Potenciômetro (simulando o ajuste de temperatura)
- Resistor LDR (simulando o elemento de aquecimento)
- LEDs:
  - Verde (indicador de temperatura ideal)
  - Amarelo (indicador de temperatura no limite superior)
  - Vermelho (indicador de sobreaquecimento)
  - Azul (indicador de sistema ligado)
- Buzzer (para alertas sonoros)
- Botão (para ligar/desligar o sistema)
- Resistores (para LEDs e LDR)

## Descrição do Sistema

### 1. Controle de Temperatura

- **Potenciômetro**: Utilizado para ajustar manualmente a temperatura da piscina. A variação do potenciômetro representa a mudança na temperatura da água.

### 2. Aquecimento da Piscina

- **Resistor LDR**: Simula o elemento de aquecimento da piscina. A resistência do LDR muda de acordo com a intensidade luminosa aplicada a ele, representando a potência de aquecimento.

### 3. Indicadores de Temperatura

- **LED Verde**: Indica que a temperatura da piscina está dentro da faixa ideal.
- **LED Amarelo**: Sinaliza que a temperatura está no limite superior da faixa ideal, necessitando atenção.
- **LED Vermelho**: Acende quando a temperatura ultrapassa o limite seguro, indicando sobreaquecimento. O buzzer também é ativado para emitir um alerta sonoro.

### 4. Controle do Sistema de Aquecimento

- **Botão de Ligar/Desligar**: Controla o estado do sistema de aquecimento. Quando o sistema está ligado, o LED Azul fica aceso. Este LED apaga quando o sistema é desligado.

## Como Utilizar

1. **Monte o circuito conforme o diagrama.**
2. **Carregue o código no Arduino usando o Arduino IDE.**
3. **Ajuste a temperatura utilizando o potenciômetro e observe as mudanças nos LEDs e no buzzer conforme a temperatura ajustada.**
4. **Use o botão para ligar e desligar o sistema de aquecimento.**

---

Este README fornece uma descrição clara do projeto e orientações para configuração e uso. Se precisar de mais informações ou tiver alguma dúvida, sinta-se à vontade para perguntar!
