FROM node:14-alpine

LABEL maintainer="Artyom Lazyan <artyomlazyan@gmail.com>"

WORKDIR /front_end

COPY package.json ./
COPY package-lock.json ./

COPY ./ ./

RUN npm i

CMD ["npm", "start"]