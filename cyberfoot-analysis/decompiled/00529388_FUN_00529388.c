// Address: 00529388
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529388(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  float10 local_9c;
  int local_90;
  int local_8c;
  int local_88;
  undefined1 local_7c [8];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_5c;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_3c;
  int local_38 [2];
  int local_30;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_8 = param_2;
  if (param_4 == '\0') {
    FUN_0052a340(param_1,&local_18,local_38);
    FUN_0052a340(param_1,&local_18,&local_48,(float)local_38[0]);
    FUN_0052a340(param_1,&local_18,local_58,(float)local_44);
    FUN_0052a340(param_1,&local_18,&local_68);
    local_6c = local_50 - local_68;
    FUN_0052a340(param_1,&local_18,local_7c,(float)local_6c);
    FUN_0052a340(param_1,&local_18,&local_8c);
    local_90 = local_70 - local_88;
    FUN_004aeba4(local_28);
    uVar2 = FUN_004b1cd0(0xb4,0xffffff);
    uVar3 = FUN_004b1cd0(0,0xffffff);
    uVar4 = 1;
    FUN_004aeba4(local_38);
    uVar2 = FUN_004aef34(PTR_DAT_004adf94,1,local_38,uVar4,uVar3,uVar2);
    FUN_004af62c(local_8,uVar2,local_28);
    FUN_00403a84(uVar2);
    FUN_0052a340(param_1,&local_18,local_38);
    FUN_0052a340(param_1,&local_18,&local_48,(float)local_38[0]);
    FUN_0052a340(param_1,&local_18,local_58);
    local_6c = local_3c - local_54;
    local_9c = (float10)local_6c / (float10)_DAT_00529914;
    FUN_0052a340(param_1,&local_18,&local_68);
    FUN_0052a340(param_1,&local_18,local_7c,(float)((float10)local_5c - local_9c));
    FUN_0052a340(param_1,&local_18,&local_8c);
    local_90 = local_74 - local_8c;
    FUN_0052a340(param_1,&local_18,local_ac,(float)local_90);
    FUN_0052a340(param_1,&local_18,local_bc);
    FUN_004aeba4(local_28);
    uVar2 = FUN_004b1cd0(0,0xffffff);
    uVar3 = FUN_004b1cd0(0xff,0xffffff);
    uVar4 = 1;
    FUN_004aeba4(local_38);
    uVar2 = FUN_004aef34(PTR_DAT_004adf94,1,local_38,uVar4,uVar3,uVar2);
    FUN_004af62c(local_8,uVar2,local_28);
    FUN_00403a84(uVar2);
  }
  else if (param_4 == '\x01') {
    FUN_0052a340(param_1,&local_18,local_38);
    FUN_0052a340(param_1,&local_18,&local_48,(float)local_38[0]);
    FUN_0052a340(param_1,&local_18,local_58,(float)local_44);
    iVar1 = local_50;
    FUN_0052a340(param_1,&local_18,&local_68);
    local_6c = iVar1 - local_68;
    FUN_0052a340(param_1,&local_18,local_7c,(float)local_6c / _DAT_00529908);
    FUN_0052a340(param_1,&local_18,&local_8c);
    local_90 = local_70 - local_88;
    FUN_004aeba4(local_28);
    uVar2 = FUN_004b1cd0(0xb4,0xffffff);
    uVar3 = FUN_004b1cd0(0,0xffffff);
    uVar4 = 0;
    FUN_004aeba4(local_38);
    uVar2 = FUN_004aef34(PTR_DAT_004adf94,1,local_38,uVar4,uVar3,uVar2);
    FUN_004af62c(local_8,uVar2,local_28);
    FUN_00403a84(uVar2);
    FUN_0052a340(param_1,&local_18,local_38);
    FUN_0052a340(param_1,&local_18,&local_48);
    local_6c = local_30 - local_48;
    local_9c = (float10)local_6c / (float10)_DAT_00529914;
    FUN_0052a340(param_1,&local_18,local_58);
    FUN_0052a340(param_1,&local_18,&local_68,(float)((float10)local_50 - local_9c));
    FUN_0052a340(param_1,&local_18,local_7c,(float)local_64);
    FUN_0052a340(param_1,&local_18,&local_8c);
    local_90 = local_74 - local_8c;
    FUN_0052a340(param_1,&local_18,local_ac,(float)local_90 / _DAT_00529914);
    FUN_0052a340(param_1,&local_18,local_bc);
    FUN_004aeba4(local_28);
    uVar2 = FUN_004b1cd0(0,0xffffff);
    uVar3 = FUN_004b1cd0(0xff,0xffffff);
    uVar4 = 0;
    FUN_004aeba4(local_38);
    uVar2 = FUN_004aef34(PTR_DAT_004adf94,1,local_38,uVar4,uVar3,uVar2);
    FUN_004af62c(local_8,uVar2,local_28);
    FUN_00403a84(uVar2);
  }
  return;
}

