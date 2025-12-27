pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Print Source Files in /src') {
            steps {
                sh '''
                    echo "=== Printing source files under /src ==="

                    if [ ! -d "src" ]; then
                        echo "/src directory does not exist"
                        exit 1
                    fi

                    find src -type f | while read file; do
                        echo ""
                        echo "========================================"
                        echo "FILE: $file"
                        echo "========================================"
                        cat "$file"
                        echo ""
                    done
                '''
            }
        }
    }
}