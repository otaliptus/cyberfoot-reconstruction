// Address: 0045bcd0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0045bcd0(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0045bd5d;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (param_1[0x5a] != 0) {
    cVar3 = (**(code **)(*param_1 + 0x50))();
    puVar2 = puStack_18;
    if ((cVar3 != '\0') && ((char)param_1[0x5c] != '\0')) {
      FUN_00466208(param_1,&local_8);
      cVar3 = FUN_0047e450(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
      puVar2 = puStack_18;
      if (cVar3 != '\0') {
        piVar1 = (int *)param_1[0x5a];
        cVar3 = FUN_00403c80(piVar1);
        puVar2 = puStack_18;
        if (cVar3 != '\0') {
          (**(code **)(*piVar1 + 0xc4))();
          *(undefined4 *)(param_2 + 0xc) = 1;
          puVar2 = puStack_18;
        }
      }
    }
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0045bd64;
  puStack_1c = (undefined1 *)0x45bd5c;
  FUN_004048d4(&local_8,uStack_20,puVar2);
  return;
}

