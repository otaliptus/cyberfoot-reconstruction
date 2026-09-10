// Address: 0054bf1c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054bf1c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  HWND pHVar2;
  HDC pHVar3;
  int *in_FS_OFFSET;
  int in_stack_ffffff24;
  undefined1 *in_stack_ffffff2c;
  int iStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined4 local_8;
  
  puStack_60 = &stack0xfffffffc;
  local_50 = 0;
  local_54 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_2c = 0;
  puStack_64 = &LAB_0054c0c1;
  iStack_68 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_68;
  local_8 = param_3;
  FUN_00404ff0(param_3);
  if (-1 < param_2) {
    iVar1 = (**(code **)(*(int *)param_1[0x8f] + 0x14))();
    if (param_2 < iVar1) {
      (**(code **)(*param_1 + 0x44))(param_1,local_3c);
      local_28 = FUN_0042acbc(PTR_PTR_00428c7c,1);
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      pHVar3 = GetDC(pHVar2);
      FUN_0042b628(local_28,pHVar3);
      FUN_0054ce04(param_1,param_2,&local_2c);
      in_stack_ffffff2c = local_4c;
      in_stack_ffffff24 = param_1[0xbb];
      (**(code **)(*(int *)param_1[0x8f] + 0xc))
                ((int *)param_1[0x8f],param_2,&local_54,in_stack_ffffff24,param_1[0xbe],
                 in_stack_ffffff2c,local_18,local_14,local_10,local_c,&local_24,&local_20,&local_1c,
                 param_1[0xbd],0x1fffffff,0x1fffffff,param_1[0xac],0,0x3ff00000,
                 CONCAT31((int3)((uint)param_1[0xbc] >> 8),(char)param_1[0xba]) ^ 1,0,1,1,0,1,1,
                 param_1[0xbc],0xffffffff,0xffffffff,0,0,param_1[0xae]);
      FUN_004051d4(&local_50,local_54);
      FUN_0054a8f0(local_28,local_50,local_3c);
      pHVar3 = (HDC)FUN_0042b5a8(local_28);
      pHVar2 = (HWND)FUN_0046cae0(param_1);
      ReleaseDC(pHVar2,pHVar3);
      FUN_00403a84(local_28);
      FUN_0040502c(local_8,local_20);
      goto LAB_0054c08e;
    }
  }
  FUN_0040e370(PTR_DAT_00545ba8,1,"Item index out of range");
  FUN_00404250();
LAB_0054c08e:
  *in_FS_OFFSET = in_stack_ffffff24;
  FUN_004048d4(&local_54,in_stack_ffffff24,in_stack_ffffff2c,&LAB_0054c0c8);
  FUN_00404ff0(&local_50);
  FUN_00404ff0(&local_2c);
  FUN_00405008(&local_24,3);
  return;
}

