{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "clock_isr.cc"
      ],
      "cflags_cc!" : ["-lmraa"],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
