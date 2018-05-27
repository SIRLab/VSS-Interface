FROM ubuntu:16.04

# Instala o CMAKE
RUN apt-get update

# Copia tudo para o container
COPY . /vss-core
WORKDIR /vss-core

# Adiciona permissão de execução dos shellscripts
RUN chmod +x /vss-core/configure.sh
RUN chmod +x /vss-core/entrypoint.sh
RUN chmod +x /vss-core/protos.sh

# Executa a instalação na criação dos containers
RUN /vss-core/configure.sh

# Script executado no docker run
ENTRYPOINT ["/vss-core/entrypoint.sh"]