{
  "targets": [
    {
      "target_name": "addon",
      "sources": [
        "addon.cc",
        "clock_isr.cc"
      ],
      "libraries": [
        "-lmraa"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
