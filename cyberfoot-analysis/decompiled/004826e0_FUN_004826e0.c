// Address: 004826e0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004826e0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((((((*(byte *)(param_1 + 0x2f4) & 8) == 0) && (*(int *)(DAT_0066cbf4 + 0x44) != 0)) &&
       (*(int *)(*(int *)(DAT_0066cbf4 + 0x44) + 0x248) != 0)) &&
      (param_1 != *(int *)(DAT_0066cbf4 + 0x44))) &&
     ((*(char *)(param_1 + 0x22f) == '\x01' ||
      (*(char *)(*(int *)(DAT_0066cbf4 + 0x44) + 0x22f) != '\x02')))) {
    uVar2 = 0;
    if ((((*(byte *)(param_1 + 0x1c) & 0x10) == 0) && (*(int *)(param_1 + 0x248) != 0)) &&
       ((*(char *)(*(int *)(param_1 + 0x248) + 0x5c) != '\0' ||
        (*(char *)(param_1 + 0x22f) == '\x01')))) {
      uVar2 = *(undefined4 *)(param_1 + 0x248);
    }
    uVar1 = *(undefined4 *)(*(int *)(DAT_0066cbf4 + 0x44) + 0x248);
    if (param_2 == '\0') {
      FUN_0047ac0c(uVar1,uVar2);
    }
    else {
      FUN_0047abf0(uVar1,uVar2);
    }
  }
  return;
}

