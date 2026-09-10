// Address: 0043036c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0043036c(int param_1)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar4 = 8;
  cVar3 = FUN_004302ec(param_1);
  if (cVar3 == '\x01') {
    uVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    uVar1 = *(ushort *)(iVar2 + 0x3e);
    if (uVar1 < 0x11) {
      if (uVar1 == 0x10) {
        if (*(int *)(iVar2 + 0x40) == 0) {
          uVar4 = 4;
        }
        else if ((*(int *)(iVar2 + 0x40) == 3) && (*(int *)(iVar2 + 0x5c) == 0x7e0)) {
          uVar4 = 5;
        }
      }
      else if (uVar1 == 1) {
        uVar4 = 1;
      }
      else if (uVar1 == 4) {
        uVar4 = 2;
      }
      else if (uVar1 == 8) {
        uVar4 = 3;
      }
    }
    else if (uVar1 == 0x18) {
      uVar4 = 6;
    }
    else if ((uVar1 == 0x20) && (*(int *)(iVar2 + 0x40) == 0)) {
      uVar4 = 7;
    }
  }
  return uVar4;
}

