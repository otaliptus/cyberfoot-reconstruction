// Address: 00520ba4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520ba4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar2 = *(undefined2 *)(param_2 + 2);
  uVar1 = *(undefined1 *)((int)param_2 + 10);
  puVar5 = (undefined4 *)FUN_004027fc(0x10);
  puVar5[1] = uVar3;
  puVar5[2] = uVar4;
  *(undefined2 *)(puVar5 + 3) = uVar2;
  *(undefined1 *)((int)puVar5 + 0xe) = uVar1;
  *puVar5 = param_3;
  FUN_0041dec0(param_1,puVar5);
  return;
}

