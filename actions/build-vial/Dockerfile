FROM qmkfm/qmk_cli:latest

COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENV UV_PYTHON=3.12

ENTRYPOINT ["/entrypoint.sh"]
