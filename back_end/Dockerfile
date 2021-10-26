FROM ubuntu:18.04

LABEL maintainer="Artyom Lazyan <artyomlazyan@gmail.com>"

# for not showing this warning "debconf: unable to initialize frontend: Dialog"
#RUN echo 'debconf debconf/frontend select Noninteractive' | debconf-set-selections
ARG DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends\
    apt-utils\
    sudo\
    librestbed-dev\
    curl \
    build-essential \
    cmake && \
    apt-get autoclean && \
    apt-get autoremove && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

# node js npm
#RUN curl -sL https://deb.nodesource.com/setup_17.x | sudo bash - && apt-get install -yq nodejs build-essential

WORKDIR /back_end

COPY . /back_end/

RUN rm -rf build && mkdir build && cd build && cmake .. && cmake --build .
CMD [ "./build/sherlock"]