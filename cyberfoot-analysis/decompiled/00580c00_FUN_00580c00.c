// Address: 00580c00
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00580c00(int param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x21d);
  if (param_2 != cVar1) {
    *(char *)(param_1 + 0x21d) = param_2;
    if (*(char *)(param_1 + 0x169) == '\0') {
      *(undefined1 *)(param_1 + 0x260) = 3;
    }
    FUN_00584648(param_1,*(undefined1 *)(param_1 + 0x261),cVar1 == '\x01');
  }
  return;
}

