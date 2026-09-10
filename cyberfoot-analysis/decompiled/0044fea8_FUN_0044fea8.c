// Address: 0044fea8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044fea8(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  cVar2 = FUN_0046cde4(param_1);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x220);
    iVar5 = 0;
    if (iVar1 != 0) {
      FUN_00451ed4(param_1,0);
      iVar5 = iVar1;
    }
    uVar4 = 0x402;
    if (*(char *)(param_1 + 0x274) != '\0') {
      uVar4 = 4;
    }
    if (*(char *)(param_1 + 0x277) != '\0') {
      uVar4 = uVar4 | 1;
    }
    if (*(char *)(param_1 + 0x278) != '\0') {
      uVar4 = uVar4 | 8;
    }
    if (*(char *)(param_1 + 0x27a) != '\0') {
      uVar4 = uVar4 | 0x20;
    }
    if (*(char *)(param_1 + 0x275) != '\0') {
      uVar4 = uVar4 | 0x100;
    }
    if (*(char *)(param_1 + 0x276) != '\0') {
      uVar4 = uVar4 | 0x10;
    }
    if (*(char *)(param_1 + 0x294) != '\0') {
      uVar4 = uVar4 | 0x2000;
    }
    if ((*(byte *)(param_1 + 0x279) & 1) == 0) {
      if (DAT_0044ffa0 != (DAT_0044ff9c & *(byte *)(param_1 + 0x279))) {
        uVar4 = uVar4 | 0x80;
      }
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    if ((*(byte *)(param_1 + 0x279) & 4) != 0) {
      uVar4 = uVar4 | 0x800;
    }
    if ((*(byte *)(param_1 + 0x279) & 2) != 0) {
      uVar4 = uVar4 | 0x1000;
    }
    uVar3 = FUN_0046cae0(param_1);
    FUN_00432f80(uVar3,uVar4);
    if (iVar5 != 0) {
      FUN_00451ed4(param_1,iVar5);
    }
  }
  return;
}

