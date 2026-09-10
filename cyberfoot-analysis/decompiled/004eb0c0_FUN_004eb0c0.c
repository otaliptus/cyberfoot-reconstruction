// Address: 004eb0c0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004eb0c0(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004eb174;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (((*(int *)(param_1 + 0x274) == 0) ||
      (cVar2 = FUN_00432488(param_2,1,7), puVar1 = puStack_18, cVar2 == '\0')) ||
     (iVar3 = (**(code **)(**(int **)(param_1 + 0x274) + 0x14))(), puVar1 = puStack_18, iVar3 < 7))
  {
    puStack_18 = puVar1;
    FUN_004ebf9c(param_1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x274) + 0xc))
              (*(int **)(param_1 + 0x274),param_2 + -1,&local_8);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004eb17b;
  puStack_1c = (undefined1 *)0x4eb173;
  FUN_004048d4(&local_8,uStack_20,puVar1);
  return;
}

