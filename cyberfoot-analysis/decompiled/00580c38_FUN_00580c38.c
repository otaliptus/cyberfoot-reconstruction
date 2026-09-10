// Address: 00580c38
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580c38(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x21c)) {
    switch(param_2) {
    case '\0':
      *(undefined1 *)(param_1 + 0x16b) = 1;
      break;
    case '\x01':
      *(undefined1 *)(param_1 + 0x16b) = 0x33;
      break;
    case '\x02':
      *(undefined1 *)(param_1 + 0x16b) = 0x66;
      break;
    case '\x03':
      *(undefined1 *)(param_1 + 0x16b) = 0x99;
      break;
    case '\x04':
      *(undefined1 *)(param_1 + 0x16b) = 0xcc;
      break;
    default:
      *(undefined1 *)(param_1 + 0x16b) = 0xff;
    }
    *(char *)(param_1 + 0x21c) = param_2;
    if (*(char *)(param_1 + 0x169) == '\0') {
      *(undefined1 *)(param_1 + 0x260) = 3;
    }
    FUN_00584438(param_1);
    FUN_00466754(param_1);
  }
  return;
}

