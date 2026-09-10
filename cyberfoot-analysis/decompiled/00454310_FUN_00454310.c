// Address: 00454310
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00454310(undefined4 param_1,uint *param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [9];
  byte local_1b;
  
  cVar1 = FUN_0046cde4(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_004498ac();
    if (iVar2 < 0x40046) {
      iVar2 = FUN_00454f60(param_1);
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        while (((-1 < iVar2 && (iVar4 = FUN_004673cc(param_1,0x417,iVar2,local_24), iVar4 != 0)) &&
               ((local_1b & 1) != 0))) {
          iVar2 = iVar2 + -1;
        }
        if (iVar2 < 0) {
          iVar2 = FUN_004673cc(param_1,0x41d,0,&local_34);
          if (iVar2 != 0) {
            *param_3 = local_28 - local_30;
          }
        }
        else {
          iVar2 = FUN_004673cc(param_1,0x41d,iVar2,&local_34);
          if (iVar2 != 0) {
            *param_3 = local_28 - local_30;
            *param_2 = local_2c - local_34;
          }
        }
      }
    }
    else {
      uVar3 = FUN_004673cc(param_1,0x43a,0,0);
      *param_3 = uVar3 >> 0x10;
      *param_2 = uVar3 & 0xffff;
    }
  }
  return;
}

