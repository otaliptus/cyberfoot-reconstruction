// Address: 0040b78c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040b78c(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_ESI;
  bool bVar4;
  int local_38;
  short local_34;
  char local_31;
  int local_1c;
  char local_15;
  int local_14;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_d = DAT_0066c68b;
  local_e = DAT_0066c68a;
  uVar2 = 2;
  if ((char)param_3 == '\0') {
    uVar1 = (uint)(ushort)param_2[2] | *param_2 | param_2[1];
    bVar4 = uVar1 == 0;
    if (!bVar4) {
      uVar2 = (uint)(ushort)((ushort)param_2[2] >> 0xf);
      bVar4 = uVar2 == 0;
    }
  }
  else {
    uVar1 = *param_2 | param_2[1];
    bVar4 = uVar1 == 0;
    if (!bVar4) {
      uVar2 = -((int)param_2[1] >> 0x1f);
      bVar4 = uVar2 == 0;
    }
  }
  local_8 = param_1;
  FUN_0040b86e(uVar1,param_2,uVar2);
  if (!bVar4) {
    FUN_0040b8a9();
    iVar3 = 9999;
    if (local_15 == '\0') {
      iVar3 = local_14 - local_1c;
      local_14 = 0x12;
    }
    FUN_0040ba80(&local_34,param_2,param_3,iVar3,local_14);
    if (((local_34 != -0x8000) && (local_34 != 0x7fff)) &&
       (((char)param_3 != '\0' || ((local_34 < 0x13 || (local_15 != '\0')))))) {
      bVar4 = local_31 == '\0';
      if (bVar4) {
        FUN_0040b86e();
        if (bVar4) goto LAB_0040b831;
        if (unaff_ESI != local_38) {
          FUN_0040b8a9();
        }
      }
      FUN_0040b954();
      FUN_0040ba75();
      return;
    }
  }
LAB_0040b831:
  FUN_0040b4b8(local_8,param_2,param_3,0,0xf,0);
  FUN_0040ba75();
  return;
}

