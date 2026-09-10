// Address: 004f8210
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f8210(int *param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004f835a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = param_3;
  iVar3 = (**(code **)(*(int *)param_1[0x135] + 0x30))((int *)param_1[0x135],param_2);
  switch(*(undefined1 *)(iVar3 + 0x3c)) {
  case 0:
    *(undefined4 *)(param_4 + 0x18) = local_8;
    break;
  case 1:
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    uVar2 = (**(code **)(*piVar5 + 8))();
    *param_4 = uVar2;
    break;
  case 3:
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    (**(code **)(*piVar5 + 0xc))();
    *(double *)(param_4 + 8) = (double)in_ST0;
    break;
  case 4:
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    (**(code **)(*piVar5 + 0x10))();
    *(double *)(param_4 + 0x10) = (double)in_ST0;
    break;
  case 5:
    iVar3 = (**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(iVar3 + 8);
    break;
  case 6:
  case 8:
  case 0xb:
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    (**(code **)(*piVar5 + 0x18))(piVar5,&local_c);
    FUN_0040502c(param_4 + 0x1c,local_c);
    break;
  case 7:
    piVar5 = (int *)(**(code **)(*param_1 + 0x23c))(param_1,param_2,local_8);
    uVar4 = (**(code **)(*piVar5 + 0x14))();
    *(undefined4 *)(param_4 + 0x18) = uVar4;
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004f8361;
  puStack_1c = (undefined1 *)0x4f8359;
  FUN_00404ff0(&local_c,uStack_20,puVar1);
  return;
}

