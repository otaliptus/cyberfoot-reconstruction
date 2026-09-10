// Address: 004af154
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af154(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
                 int param_6,int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  float *pfVar5;
  undefined1 *in_stack_ffffff88;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48 [16];
  int local_38;
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_54 = 0;
  local_50 = 0;
  local_20 = 0;
  puStack_64 = (undefined1 *)0x4af17b;
  local_c = param_3;
  local_8 = param_2;
  FUN_00404d94(param_2);
  puStack_68 = &LAB_004af3a8;
  iStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_6c;
  uVar7 = 0x4af193;
  puStack_64 = &stack0xfffffffc;
  uVar1 = FUN_004af478(param_1,param_6);
  if (((param_5 & 0x400) == 0x400) || (param_4 != 0x1fffffff)) {
    FUN_0040496c(&local_20,local_8);
    local_24 = FUN_00404ba4(local_8);
    local_1c = 2;
    iVar2 = FUN_0042a624(param_6);
    if (8 < iVar2) {
      local_38 = FUN_0042a624(param_6);
      local_38 = local_38 + -8;
      iVar2 = FUN_00402c38();
      local_1c = local_1c + iVar2;
    }
    if (((0 < local_24) && (*(char *)(local_20 + -1 + local_24) == ' ')) && (1 < local_24)) {
      iVar2 = thunk_FUN_00404db0(&local_20);
      *(undefined1 *)(iVar2 + -1 + local_24) = 0x69;
    }
    local_38 = (param_7[2] - *param_7) + 1000;
    local_4c = param_7[3] - param_7[1];
    uVar7 = uVar1;
    FUN_004aeba4(local_48);
    puVar6 = local_48;
    in_stack_ffffff88 = local_34;
    FUN_004051d4(&local_50,local_20);
    FUN_004af71c(param_1,local_50,local_c,in_stack_ffffff88,puVar6);
    iVar2 = FUN_00402c38();
    param_7[2] = iVar2 + *param_7;
    iVar2 = FUN_00402c38();
    param_7[3] = iVar2 + param_7[1];
    if (param_4 != 0x1fffffff) {
      uVar3 = FUN_004ae808(param_4);
      local_10 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar3);
      local_38 = *param_7 + 1;
      FUN_004aeba4(local_48);
      FUN_004af62c(param_1,local_10,local_48);
      FUN_00403a84(local_10);
    }
  }
  if ((param_5 & 0x400) == 0) {
    uVar3 = FUN_004ae808(*(undefined4 *)(param_6 + 0x18));
    uVar4 = FUN_004aeda8(PTR_DAT_004adedc,1,uVar3);
    local_18 = (float)*param_7;
    local_14 = (float)param_7[1];
    pfVar5 = &local_18;
    uVar3 = uVar1;
    local_10 = uVar4;
    FUN_004051d4(&local_54,local_8);
    FUN_004af8c8(param_1,local_54,local_c,uVar4,pfVar5,uVar3);
    FUN_00403a84(local_10);
  }
  FUN_00403a84(uVar1);
  *in_FS_OFFSET = (int)in_stack_ffffff88;
  FUN_00405008(&local_54,2,uVar7,&LAB_004af3af);
  FUN_004048d4(&local_20);
  FUN_004048d4(&local_8);
  return;
}

