# Sintetizador Analógico Modular

Este proyecto consiste en el diseño y simulación de un sintetizador musical analógico basado en el estándar de síntesis sustractiva. Fue desarrollado para la materia **Laboratorio de Electrónica Analógica** en la UNRN (2023).

## Descripción General
El objetivo fue diseñar un sistema capaz de generar, filtrar y amplificar señales de audio mediante el control por tensión. El sistema es totalmente modular y opera con una fuente partida de ±12V.

## Módulos Implementados
Basado en el diseño técnico, el sintetizador cuenta con los siguientes bloques:

- **VCO (Voltage Controlled Oscillator):** Generador de señales básicas (Triangular, Cuadrada y Diente de Sierra) con control de frecuencia por tensión. Utiliza operacionales de alta velocidad (Serie TL08x/TL07x).
- **VCF (Voltage Controlled Filter):** Filtro pasa-bajos activo con control de frecuencia de corte, permitiendo el modelado del timbre sonoro.
- **VCA (Voltage Controlled Amplifier):** Etapa de salida que controla la amplitud de la señal mediante una tensión de control externa.
- **Generador de Envolvente (ADSR):** Control temporal del sonido en cuatro etapas: Attack, Decay, Sustain y Release.
- **LFO (Low Frequency Oscillator):** Oscilador de baja frecuencia para modulación de parámetros (vibrato/tremolo).
- **Mixer:** Etapa sumadora para combinar las distintas fuentes de señal antes del filtrado.

## Especificaciones Técnicas
- **Alimentación:** ±12V DC (Fuente partida diseñada con reguladores 7812/7912).
- **Componentes clave:** Amplificadores operacionales TL082/TL072, transistores de propósito general (BC547/557) y potenciómetros de precisión para el control manual.
- **Herramientas:** Diseñado y validado mediante simulaciones en **Proteus Professional**.

## Resultados y Simulación
En la carpeta `/simulaciones` se pueden observar las capturas del osciloscopio, donde se verifica:
1. La linealidad del VCO en el rango audible.
2. La respuesta en frecuencia del VCF.
3. El correcto funcionamiento del ciclo ADSR sobre el VCA.
