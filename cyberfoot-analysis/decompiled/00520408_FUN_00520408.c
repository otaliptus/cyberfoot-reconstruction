// Address: 00520408
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00520408(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027fc(8);
  *(undefined1 *)(puVar1 + 1) = param_2;
  *puVar1 = param_3;
  FUN_0041dec0(param_1,puVar1);
  return;
}

