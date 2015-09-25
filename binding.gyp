{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "sync.cc"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
