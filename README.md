<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>Instruções de Execução</title>

    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            font-family: Arial, Helvetica, sans-serif;
            background: linear-gradient(135deg, #0f172a, #1e293b);
            color: #f8fafc;
            min-height: 100vh;
            padding: 40px 20px;
        }

        .container {
            max-width: 850px;
            margin: auto;
        }

        .header {
            text-align: center;
            margin-bottom: 35px;
        }

        .header h1 {
            font-size: 36px;
            margin-bottom: 10px;
            color: #38bdf8;
        }

        .header p {
            color: #94a3b8;
            font-size: 16px;
        }

        .card {
            background: #1e293b;
            border: 1px solid #334155;
            border-radius: 16px;
            padding: 28px;
            margin-bottom: 25px;
            box-shadow: 0 10px 30px rgba(0, 0, 0, 0.25);
        }

        .card h2 {
            color: #38bdf8;
            margin-bottom: 20px;
            font-size: 24px;
        }

        .step {
            display: flex;
            align-items: flex-start;
            gap: 15px;
            margin-bottom: 18px;
        }

        .number {
            min-width: 35px;
            height: 35px;
            background: #0ea5e9;
            border-radius: 50%;
            display: flex;
            align-items: center;
            justify-content: center;
            font-weight: bold;
            color: white;
        }

        .step p {
            line-height: 1.6;
            color: #cbd5e1;
            padding-top: 5px;
        }

        code {
            background: #0f172a;
            color: #7dd3fc;
            padding: 4px 8px;
            border-radius: 6px;
            font-family: Consolas, monospace;
        }

        .example {
            background: #0f172a;
            border-left: 4px solid #22c55e;
            padding: 18px;
            margin-top: 20px;
            border-radius: 8px;
        }

        .example p {
            margin-bottom: 10px;
            color: #cbd5e1;
        }

        .terminal {
            background: #020617;
            border-radius: 10px;
            padding: 20px;
            margin-top: 15px;
            font-family: Consolas, monospace;
            color: #4ade80;
            line-height: 1.8;
        }

        .result {
            margin-top: 20px;
            padding: 15px;
            background: rgba(34, 197, 94, 0.1);
            border: 1px solid #22c55e;
            border-radius: 8px;
            color: #86efac;
        }

        .tip {
            text-align: center;
            color: #94a3b8;
            font-size: 14px;
            margin-top: 30px;
        }

        .icon {
            font-size: 22px;
        }
    </style>
</head>

<body>

    <div class="container">

        <header class="header">
            <h1>🚀 Instruções de Execução</h1>
            <p>Guia rápido para compilar, executar e testar o projeto</p>
        </header>

        <!-- COMO RODAR -->
        <section class="card">
            <h2>💻 Como rodar os códigos</h2>

            <div class="step">
                <div class="number">1</div>
                <p>
                    Abra a pasta do projeto no
                    <strong>CLion</strong>.
                </p>
            </div>

            <div class="step">
                <div class="number">2</div>
                <p>
                    Abra o arquivo <code>.cpp</code> desejado,
                    localizado dentro da pasta <code>src</code>.
                </p>
            </div>

            <div class="step">
                <div class="number">3</div>
                <p>
                    Clique no botão
                    <strong>▶️ Play</strong>
                    no canto superior direito para
                    compilar e executar o programa.
                </p>
            </div>
        </section>

        <!-- COMO TESTAR -->
        <section class="card">
            <h2>🧪 Como testar</h2>

            <div class="step">
                <div class="number">1</div>
                <p>
                    Digite a quantidade de elementos e pressione
                    <strong>Enter</strong>.
                </p>
            </div>

            <div class="step">
                <div class="number">2</div>
                <p>
                    Digite os números da entrada e pressione
                    <strong>Enter</strong>.
                </p>
            </div>

            <div class="example">
                <p>📌 <strong>Exemplo de entrada:</strong></p>

                <div class="terminal">
                    Quantidade de elementos: 5<br>
                    Entrada: 0 1 0 3 12
                </div>
            </div>

            <div class="result">
                ✅ O resultado ajustado será exibido diretamente na tela.
            </div>
        </section>

        <p class="tip">
            💡 Certifique-se de que o projeto foi compilado corretamente antes de realizar os testes.
        </p>

    </div>

</body>
</html>
