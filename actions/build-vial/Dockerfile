FROM qmkfm/qmk_cli:latest

# 作業ディレクトリ
WORKDIR /github/workspace

# entrypoint をコピーして実行権限付与
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

# qmk CLI パスを保証
ENV PATH="/usr/bin:${PATH}"

# コンテナ起動時の実行スクリプト
ENTRYPOINT ["/entrypoint.sh"]
