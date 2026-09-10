// Address: 005a5520
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TForm28_bt2Click(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 fVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  wchar_t *pwStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  undefined4 local_20;
  undefined1 *local_1c;
  undefined1 *puStack_18;
  
  puVar2 = PTR_DAT_0066ac78;
  puStack_18 = &stack0xfffffffc;
  iVar4 = 8;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_1c = &LAB_005a57ef;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  piVar1 = (int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38);
  *piVar1 = *piVar1 + -500000;
  *(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 8) * 0x2f8) =
       (longlong)
       ROUND((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + *(int *)(puVar2 + 8) * 0x2f8) -
             _DAT_005a57fc);
  local_24 = 0x55a2;
  uStack_22 = 0x5a;
  FUN_006468f4(*(undefined4 *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38),
               &stack0xffffffec);
  local_24 = 0x55b2;
  uStack_22 = 0x5a;
  FUN_004052cc(&stack0xfffffff0,&DAT_005a5804,unaff_ESI);
  local_24 = 0x55c0;
  uStack_22 = 0x5a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x304),unaff_EBX);
  local_24 = 0x55e3;
  uStack_22 = 0x5a;
  local_1c = (undefined1 *)FUN_00402c38();
  fVar5 = (float10)CONCAT44(extraout_EDX,local_1c);
  pwStack_2c = SUB104(fVar5,0);
  local_28 = (undefined4)((unkuint10)fVar5 >> 0x20);
  local_24 = (undefined2)((unkuint10)fVar5 >> 0x40);
  uStack_30 = 0x5a5602;
  FUN_0040bdc0(&local_28);
  local_24 = 0x560a;
  uStack_22 = 0x5a;
  uVar3 = FUN_00409ff8(local_28);
  local_24 = 0x5612;
  uStack_22 = 0x5a;
  FUN_006468f4(uVar3,&local_24);
  uVar3 = CONCAT22(uStack_22,local_24);
  local_24 = 0x5622;
  uStack_22 = 0x5a;
  FUN_004052cc(&local_20,&DAT_005a5804,uVar3);
  local_24 = 0x5630;
  uStack_22 = 0x5a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x308),local_20);
  local_24 = 0x564b;
  uStack_22 = 0x5a;
  uVar3 = FUN_00402c38();
  local_24 = 0x5653;
  uStack_22 = 0x5a;
  FUN_006468f4(uVar3,&uStack_30);
  local_24 = 0x5663;
  uStack_22 = 0x5a;
  FUN_004052cc(&pwStack_2c,&DAT_005a5804,uStack_30);
  local_24 = 0x5671;
  uStack_22 = 0x5a;
  FUN_004e1414(*(undefined4 *)(param_1 + 0x310),pwStack_2c);
  local_24 = 0x568c;
  uStack_22 = 0x5a;
  uVar3 = FUN_00402c38();
  local_24 = 0x5694;
  uStack_22 = 0x5a;
  FUN_006468f4(uVar3,&local_3c);
  local_24 = 0x56a4;
  uStack_22 = 0x5a;
  FUN_004052cc(&local_38,&DAT_005a5804,local_3c);
  local_24 = 0x56af;
  uStack_22 = 0x5a;
  FUN_00404b6c(&local_34,local_38);
  local_24 = 0x56c4;
  uStack_22 = 0x5a;
  FUN_00466238(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_34);
  if (*(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38) == 0) {
    local_24 = 0x56ea;
    uStack_22 = 0x5a;
    (**(code **)(**(int **)(param_1 + 0x31c) + 100))(*(int **)(param_1 + 0x31c),0);
  }
  iVar4 = *(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38);
  if (iVar4 < *(int *)(&DAT_006d24fc +
                      *(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + *(int *)(puVar2 + 8) * 0x2f8) * 4))
  {
    local_24 = 0x5725;
    uStack_22 = 0x5a;
    (**(code **)(**(int **)(param_1 + 800) + 100))
              (*(int **)(param_1 + 800),CONCAT31((int3)((uint)iVar4 >> 8),1));
  }
  if (*(int *)(*(int *)PTR_DAT_0066afec + 0x20 + *(int *)(puVar2 + 8) * 0x38) < 1) {
    local_24 = 0x574b;
    uStack_22 = 0x5a;
    (**(code **)(**(int **)(param_1 + 0x31c) + 100))(*(int **)(param_1 + 0x31c),0);
  }
  local_24 = 0x581c;
  uStack_22 = 0x5a;
  local_28 = 0x5a576b;
  uVar3 = FUN_00402c38();
  local_28 = 0x5a5773;
  FUN_006468f4(uVar3,&local_44);
  local_28 = local_44;
  pwStack_2c = L"</shad>";
  uStack_30 = 0x5a5788;
  FUN_00405330(&local_40,3);
  uStack_30 = 0x5a579d;
  FUN_00545088(*(undefined4 *)(*(int *)PTR_DAT_0066b054 + 0x420),local_40);
  uVar3 = CONCAT22(uStack_22,local_24);
  *in_FS_OFFSET = pwStack_2c;
  local_24 = 0x57f6;
  uStack_22 = 0x5a;
  local_28 = 0x5a57b7;
  FUN_00405008(&local_44,4,uVar3);
  local_28 = 0x5a57bf;
  FUN_004048d4(&local_34);
  local_28 = 0x5a57cc;
  FUN_00405008(&uStack_30,2);
  local_28 = 0x5a57d4;
  FUN_004048d4(&local_28);
  local_28 = 0x5a57e1;
  FUN_00405008(&local_24,2);
  local_28 = 0x5a57ee;
  FUN_00405008(&stack0xffffffec,2);
  return;
}

