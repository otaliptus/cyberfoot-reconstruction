// Address: 004ae840
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ae840(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  char local_48;
  float local_47;
  float local_43;
  float local_3f;
  float local_3b;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  char local_8;
  
  puVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  switch(local_34) {
  case 0:
    uVar2 = FUN_004b1cd0(local_28,local_30);
    uVar2 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar2);
    if (local_48 == '\0') {
      FUN_004af62c(local_50[0],uVar2,&local_47);
    }
    else {
      FUN_004b1c30(local_50[0],uVar2,local_50[1]);
    }
    FUN_00403a84(uVar2);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    uVar5 = local_34 != 3;
    if (local_34 == 4) {
      uVar5 = 2;
    }
    if (local_34 == 5) {
      uVar5 = 3;
    }
    FUN_004aeba4(local_60,local_34,0,local_3b + _DAT_004aeb84,local_3f + _DAT_004aeb84,
                 local_43 - _DAT_004aeb80,local_47 - _DAT_004aeb80);
    uVar2 = FUN_004b1cd0(local_28,local_30);
    uVar1 = FUN_004b1cd0(local_24,local_2c);
    uVar2 = FUN_004aef34(PTR_DAT_004adf94,1,local_60,uVar5,uVar1,uVar2);
    FUN_004aeeb0(uVar2,0xffffffff);
    if (local_48 == '\0') {
      FUN_004af62c(local_50[0],uVar2,&local_47);
    }
    else {
      FUN_004b1c30(local_50[0],uVar2,local_50[1]);
    }
    FUN_00403a84(uVar2);
    if (local_8 != '\0') {
      uVar2 = FUN_004b1cd0(local_28,local_30);
      uVar2 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar2);
      FUN_004aeba4(local_70);
      FUN_004af62c(local_50[0],uVar2,local_70);
      FUN_00403a84(uVar2);
    }
    break;
  case 6:
    uVar2 = FUN_004b1cd0(local_28,local_30);
    uVar1 = FUN_004b1cd0(local_24,local_2c);
    fVar7 = (float)local_1c;
    uVar6 = 0xffffffff;
    FUN_004aeba4(local_70);
    uVar2 = FUN_004aefa4(PTR_DAT_004adf94,1,local_70,uVar6,fVar7,uVar1,uVar2);
    FUN_004aeeb0(uVar2,0xffffffff);
    if (local_48 == '\0') {
      FUN_004af62c(local_50[0],uVar2,&local_47);
    }
    else {
      FUN_004b1c30(local_50[0],uVar2,local_50[1]);
    }
    FUN_00403a84(uVar2);
    break;
  case 7:
    uVar2 = FUN_004b1cd0(local_28,local_30);
    uVar1 = FUN_004b1cd0(local_24,local_2c);
    uVar2 = FUN_004aedfc(PTR_DAT_004adff8,1,local_20,uVar1,uVar2);
    if (local_48 == '\0') {
      FUN_004af62c(local_50[0],uVar2,&local_47);
    }
    else {
      FUN_004b1c30(local_50[0],uVar2,local_50[1]);
    }
    FUN_00403a84(uVar2);
    break;
  case 9:
    if (local_18 != 0) {
      if (local_48 == '\0') {
        FUN_004b0fa0(local_18,local_50[0],&local_47);
      }
      else {
        FUN_004b0e38(local_18,local_50[0],local_50[1]);
      }
    }
  }
  if (local_14 != 0x1fffffff) {
    fVar7 = (float)local_10;
    uVar2 = FUN_004b1cd0(local_28,local_14);
    uVar2 = FUN_004aecc8(PTR_DAT_004ae054,1,uVar2,fVar7);
    FUN_004aed50(uVar2,local_c);
    if (local_48 == '\0') {
      FUN_004b17e0(local_50[0],uVar2,&local_47);
    }
    else {
      FUN_004af5f4(local_50[0],uVar2,local_50[1]);
    }
    FUN_00403a84(uVar2);
  }
  return;
}

