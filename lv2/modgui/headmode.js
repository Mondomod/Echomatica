console.log("JS Loaded");

function initModes(modes) {
 // console.log("Modes found!", modes);

  function updateFromSelection() {
    const selected = modes.querySelector('[mod-role="enumeration-option"].selected');

    if (!selected) {
      console.log("No selected option found");
      return;
    }

    const value = selected.getAttribute("mod-port-value");
 //   console.log("Mode changed to:", value);

    // remove old mode-* classes
    document.body.classList.forEach(cls => {
      if (cls.startsWith("mode-")) {
        document.body.classList.remove(cls);
      }
    });

    document.body.classList.add("mode-" + value);
  }

  const observer = new MutationObserver(() => {
 //   console.log("Mutation detected");
    updateFromSelection();
  });

  observer.observe(modes, {
    subtree: true,
    attributes: true,
    childList: true   // ?? IMPORTANT (MOD sometimes swaps nodes)
  });

  // initial run
  updateFromSelection();
}

function waitForModes(callback) {
  const modes = document.querySelector("#modes");
  if (modes) {
    callback(modes);
  } else {
    setTimeout(() => waitForModes(callback), 100);
  }
}

waitForModes(initModes);