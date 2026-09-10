// Address: 0047e680
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0047e680(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x57) != '\0') {
    cVar1 = *(char *)(param_1 + 0x5b);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_1 + 0x5b) == '\x03') ||
         (DAT_0047e6e8 == (DAT_0047e6e4 & *(byte *)(param_1 + 0x61)))) {
        uVar2 = FUN_004323b8(*(undefined4 *)(param_4 + -4),
                             *(int *)(*(int *)(param_4 + -8) + 0xc) + *(int *)(param_1 + 0x40) +
                             *(int *)(param_1 + 0x48));
        *(undefined4 *)(param_4 + -4) = uVar2;
      }
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_4 + -0xc) = *(int *)(param_4 + -0xc) + *(int *)(param_1 + 0x48);
    }
  }
  return;
}

